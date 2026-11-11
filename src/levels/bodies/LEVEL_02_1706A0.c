/* LEVEL_02:0x1706A0 -- builds eight 144-byte records from pieces of a template table and stores them in the record array. */
typedef struct {
    float f[12];
} Piece;

typedef struct {
    Piece a;
    Piece b;
    Piece c;
} Record;

typedef struct {
    Piece m[8];
} Source;

typedef struct {
    int a;
    int b;
    int c;
    float d;
} Head;

extern Head D_003AB180;
extern Record D_003AB190;
extern Record D_003AB4F0;
extern Source D_002354B0;
extern Source D_002354E0;
extern Source D_00235510;
extern Source D_002355D0;
extern Source D_00235600;
extern void *memset(void *dst, int value, unsigned int size);

void func_1706A0(void *object, int mode) {
    Record local;
    Record *destination;

    if (mode == 0xFFFF && object != 0) {
        destination = &D_003AB190;
        D_003AB180.a = 0;
        D_003AB180.b = 0;
        D_003AB180.c = 0;
        D_003AB180.d = 1.0f;
        memset(&local, 0, sizeof local);
        local.a = D_002354B0.m[0];
        local.b = D_002354B0.m[1];
        local.c = D_002354B0.m[2];
        *destination++ = local;
        memset(&local, 0, sizeof local);
        local.a = D_002354B0.m[0];
        local.b = D_002354B0.m[2];
        local.c = D_002354B0.m[3];
        *destination++ = local;
        memset(&local, 0, sizeof local);
        local.a = D_002354B0.m[0];
        local.b = D_002354B0.m[3];
        local.c = D_002354B0.m[4];
        *destination++ = local;
        memset(&local, 0, sizeof local);
        local.a = D_002354B0.m[0];
        local.b = D_002354B0.m[4];
        local.c = D_002354B0.m[1];
        *destination++ = local;
        memset(&local, 0, sizeof local);
        local.a = D_002354E0.m[0];
        local.b = D_002354E0.m[1];
        local.c = D_002354E0.m[3];
        *destination++ = local;
        memset(&local, 0, sizeof local);
        local.a = D_00235510.m[0];
        local.b = D_00235510.m[2];
        local.c = D_00235510.m[1];
        *destination++ = local;
        destination = &D_003AB4F0;
        memset(&local, 0, sizeof local);
        local.a = D_002355D0.m[0];
        local.b = D_002355D0.m[1];
        local.c = D_002355D0.m[-1];
        *destination++ = local;
        memset(&local, 0, sizeof local);
        local.a = D_00235600.m[0];
        local.b = D_00235600.m[-2];
        local.c = D_00235600.m[1];
        *destination++ = local;
    }
}
