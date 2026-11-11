/* LEVEL_06:0x166A18 -- ask the level helper for a record; when the helper
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

extern char D_00382B58[];

extern Record *func_09A3F0(int *accepted, void *key, int mode);

void func_166A18(Vec3 *src)
{
    int accepted;
    Record *rec;

    rec = func_09A3F0(&accepted, D_00382B58, 1);

    if (accepted) {
        rec->v = *src;
        rec->flag = 0;
    }
}
