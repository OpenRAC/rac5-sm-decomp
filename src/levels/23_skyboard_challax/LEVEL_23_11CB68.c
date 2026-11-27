/* LEVEL_23:0x11CB68 -- placement copy of LEVEL_01_12BCF0.c: binds model textures from a lookup table or fallback loader into submesh handle slots. */
typedef struct {
    char *ptr00;
    int w04;
    unsigned int key08;
} TexEntry;

typedef struct {
    unsigned int key00;
    char pad04[0x14 - 0x4];
} KeyEntry;

typedef struct {
    unsigned short count70;
    unsigned short pad72;
    unsigned short idx74[8];
    short handles84[8];
    char pad94[0x3C - 0x24];
} Sub3C;

typedef struct {
    char pad0[0x60];
    int w60;
    char pad64[0x6C - 0x64];
    unsigned int count6C;
    Sub3C subs70[2];
    char padE8[0xF8 - 0xE8];
} MeshF8;

typedef struct {
    char pad0[0x38];
    int w38;
    int w3C;
} Sub1C;

typedef struct {
    char pad0[8];
    unsigned int count08;
    MeshF8 *meshes0C;
    int pad10;
    KeyEntry *keys14;
    int pad18;
    Sub1C *sub1C;
} Model;

extern int func_11C818(Model *m, void *a0);
extern int func_09A4C0(char *p, int a, int b, void *scratch, int c, int d, int e, int f);
extern void *func_11B330(unsigned int key, int mode);
extern unsigned int func_09A028(void *p);

int func_11CB68(void *a0, Model *a1, int count, TexEntry *entries, int flag, int a5, int a6)
{
    int scratch;
    unsigned int i;

    if (flag != 0) {
        if (func_11C818(a1, a0) == 0) {
            return 0;
        }
    }
    a1->sub1C->w3C = a1->sub1C->w38;

    for (i = 0; i < a1->count08; i++) {
        unsigned int j;
        a1->meshes0C[i].w60 = 0;
        for (j = 0; j < a1->meshes0C[i].count6C; j++) {
            int k;
            for (k = 0; k < a1->meshes0C[i].subs70[j].count70; k++) {
                unsigned int key = a1->keys14[a1->meshes0C[i].subs70[j].idx74[k]].key00;
                TexEntry *it = entries;
                TexEntry *end = entries + count;
                int handle;

                for (;; it++) {
                    if (it >= end) {
                        handle = (int)func_09A028(0);
                        break;
                    }
                    if (it->key08 == key) {
                        if (it->ptr00 != 0) {
                            handle = func_09A4C0(it->ptr00, it->w04, a6, &scratch, 1, 0, a5, 0);
                        } else {
                            handle = (int)func_09A028(func_11B330(key, 8));
                        }
                        break;
                    }
                }
                a1->meshes0C[i].subs70[j].handles84[k] = (short)handle;
            }
        }
    }
    return 1;
}
