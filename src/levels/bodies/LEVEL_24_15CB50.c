/* LEVEL_24:0x15CB50 -- ask the level helper for a record; when the helper
   says the request went through, drop the caller's vector in it and clear
   the flag that sits just behind the vector. */
typedef struct {
    float x;
    float y;
    float z;
} Vec3;

typedef struct {
    Vec3 v;
    int flag;
} Record;

extern char D_0035FEE8[];

extern Record *func_099498(int *accepted, void *key, int mode);

void func_15CB50(Vec3 *src)
{
    int accepted;
    Record *rec;

    rec = func_099498(&accepted, D_0035FEE8, 1);

    if (accepted) {
        rec->v = *src;
        rec->flag = 0;
    }
}
