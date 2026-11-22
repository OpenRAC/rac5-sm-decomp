/* LEVEL_08:0x1B6370 -- initialises the three records of the global table from the caller's strided source and stamps each with its scale and a shared pointer. */
typedef struct { char pad_00[0xE4]; float scale; char pad_E8[4]; char *shared; } Ent;
typedef struct { char pad_00[4]; char *data; } Src;

extern Ent D_003E7CD8[3];
extern float D_00270218[3];
extern char D_00270228[];
extern void func_203470(unsigned char *a0, char *a1);

void func_1B6370(Src *src)
{
    unsigned int i = 0;
    int off = 0;
    Ent *e = D_003E7CD8;
    char *sh = D_00270228;
    float *scale = D_00270218;

    do {
        func_203470((unsigned char *)e, src->data + off);
        off += 0x34;
        e->shared = sh;
        e->scale = *scale;
        scale++;
        e++;
        i++;
    } while (i < 3);
}
