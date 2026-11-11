/* LEVEL_08:0x194068 -- ask the level helper for a record; when the helper
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

extern char D_003E6C88[];

extern Record *func_0AA518(int *accepted, void *key, int mode);

void func_194068(Vec3 *src)
{
    int accepted;
    Record *rec;

    rec = func_0AA518(&accepted, D_003E6C88, 1);

    if (accepted) {
        rec->v = *src;
        rec->flag = 0;
    }
}
