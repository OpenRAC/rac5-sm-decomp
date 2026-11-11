/* LEVEL_08:0x0AAAF8 -- placement copy of LEVEL_02_0A6AE8.c: picks a random point inside a box and passes it with a table entry to another function. */
struct Ent {
    char pad[0x11C];
};
extern struct Ent D_002EB908[];
extern int rand(void);
extern void func_0AAC00(struct Ent *e, float x, float y, float z);

void func_0AAAF8(int i, float x0, float x1, float y0, float y1, float z0, float z1)
{
    struct Ent *e;
    float x;
    float y;
    float z;
    float dx;
    float dy;
    float dz;

    e = &D_002EB908[i];
    dx = x1 - x0;
    x = x0 + dx * ((float)rand() * 4.656612873077393e-10f);
    dy = y1 - y0;
    dz = z1 - z0;
    y = y0 + dy * ((float)rand() * 4.656612873077393e-10f);
    z = z0 + dz * ((float)rand() * 4.656612873077393e-10f);
    func_0AAC00(e, x, y, z);
}
