/* LEVEL_16:0x1691A0 -- builds six 144-byte records from pieces of a template table and stores them in the record array. */
typedef struct {
    float f[12];
} Piece;

typedef struct {
    Piece a;
    Piece b;
    Piece c;
} Record;

typedef struct {
    Piece m[5];
} Source;

typedef struct {
    int a;
    int b;
    int c;
    float d;
} Head;

extern Head D_002E54B0;
extern Record D_002E54C0;
extern Source D_001D69E0;
extern Source D_001D6A10;
extern Source D_001D6A40;
extern void *memset(void *dst, int value, unsigned int size);

void func_1691A0(void *object, int mode) {
    Record local;
    Record *destination;

    if (mode == 0xFFFF && object != 0) {
        destination = &D_002E54C0;
        D_002E54B0.a = 0;
        D_002E54B0.b = 0;
        D_002E54B0.c = 0;
        D_002E54B0.d = 1.0f;
        memset(&local, 0, sizeof local);
        local.a = D_001D69E0.m[0];
        local.b = D_001D69E0.m[1];
        local.c = D_001D69E0.m[2];
        *destination++ = local;
        memset(&local, 0, sizeof local);
        local.a = D_001D69E0.m[0];
        local.b = D_001D69E0.m[2];
        local.c = D_001D69E0.m[3];
        *destination++ = local;
        memset(&local, 0, sizeof local);
        local.a = D_001D69E0.m[0];
        local.b = D_001D69E0.m[3];
        local.c = D_001D69E0.m[4];
        *destination++ = local;
        memset(&local, 0, sizeof local);
        local.a = D_001D69E0.m[0];
        local.b = D_001D69E0.m[4];
        local.c = D_001D69E0.m[1];
        *destination++ = local;
        memset(&local, 0, sizeof local);
        local.a = D_001D6A10.m[0];
        local.b = D_001D6A10.m[1];
        local.c = D_001D6A10.m[3];
        *destination++ = local;
        memset(&local, 0, sizeof local);
        local.a = D_001D6A40.m[0];
        local.b = D_001D6A40.m[2];
        local.c = D_001D6A40.m[1];
        *destination++ = local;
    }
}
