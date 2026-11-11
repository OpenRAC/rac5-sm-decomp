/* LEVEL_15:0x121448 -- store the table link and the vector in the record. */

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
extern char D_170B68[];

extern void func_080488(void *, void *);
extern void func_1214F0(void *, void *);

void func_121448(Record *dst, int index, V6 *src, void *arg)
{
    func_080488(dst, D_170B68);
    dst->link = &D_2F2B80[index];
    dst->v = *src;
    func_1214F0(dst, arg);
}
