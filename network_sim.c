#include <stdio.h>
#include <stdlib.h>

#define MAX_PACKETS 1000
#define MAX_ROUTES 5000

typedef struct {
    int id;
    int source;
    int dest;
    int ttl;
} Packet;

typedef struct {
    int dest;
    int next_hop;
} Route;

Route routing_table[MAX_ROUTES];

Packet* create_packet(int id, int src, int dst) {
    Packet *p = (Packet*)malloc(sizeof(Packet));
    p->id = id;
    p->source = src;
    p->dest = dst;
    p->ttl = 64;
    return p;
}

// 宛先に対応するnext_hopを探す（線形探索）
int routing_lookup(int dest) {
    for(int i = 0; i < MAX_ROUTES; i++) {
        if(routing_table[i].dest == dest) {
            return routing_table[i].next_hop;
        }
    }
    return -1;
}

void forward_packet(Packet *p) {
    if(p->ttl > 0) {
        p->ttl--;
        int next_hop = routing_lookup(p->dest);
        printf("Forwarding packet %d via hop %d (TTL: %d)\n",
               p->id, next_hop, p->ttl);
    }
}

void process_packets(int count) {
    Packet *packets[MAX_PACKETS];

    for(int i = 0; i < count; i++) {
        packets[i] = create_packet(i, 1, 2);
    }

    for(int i = 0; i < count; i++) {
        forward_packet(packets[i]);
    }

    // メモリ解放を忘れている！
}

int main() {
    for(int i = 0; i < MAX_ROUTES; i++) {
        routing_table[i].dest = i;
        routing_table[i].next_hop = i % 10;
    }

    process_packets(1000);
    printf("Simulation complete\n");
    return 0;
}
