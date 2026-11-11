/* LEVEL_15:0x120330 -- placement copy of LEVEL_15_121448.c: store the table link and the vector in the record. */

typedef struct {
    float f[6];
} V6;

typedef struct {
    char pad00[0x1C];
    void *link;
    V6 v;
} Record;

typedef struct {
    char pad[176];
} Entry;

extern Entry D_2F2B80[];
extern char D_170B18[];

extern void func_080488(void *, int);
extern void func_1203D8(void *, void *);

void func_120330(Record *dst, int index, V6 *src, void *arg)
{
    func_080488(dst, (int)D_170B18);
    dst->link = &D_2F2B80[index];
    dst->v = *src;
    func_1203D8(dst, arg);
}
