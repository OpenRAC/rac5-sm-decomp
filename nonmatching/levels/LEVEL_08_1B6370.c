/* USA LEVEL_08.REL:0x1B6370, 160-byte candidate (14 November 2026).
 * Measured pinned: 2 differing words; first difference at 0xC.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
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
    float *scale = D_00270218;

    do {
        func_203470((unsigned char *)e, src->data + off);
        off += 0x34;
        e->shared = D_00270228;
        e->scale = *scale;
        scale++;
        e++;
        i++;
    } while (i < 3);
}
