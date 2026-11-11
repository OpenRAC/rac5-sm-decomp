/* LEVEL_06:0x09A9D0 -- placement copy of LEVEL_02_0A6AE8.c: picks a random point inside a box and passes it with a table entry to another function. */
struct Ent {
    char pad[0x11C];
};
extern struct Ent D_00289408[];
extern int rand(void);
extern void func_09AAD8(struct Ent *e, float x, float y, float z);

void func_09A9D0(int i, float x0, float x1, float y0, float y1, float z0, float z1)
{
    struct Ent *e;
    float x;
    float y;
    float z;
    float dx;
    float dy;
    float dz;

    e = &D_00289408[i];
    dx = x1 - x0;
    x = x0 + dx * ((float)rand() * 4.656612873077393e-10f);
    dy = y1 - y0;
    dz = z1 - z0;
    y = y0 + dy * ((float)rand() * 4.656612873077393e-10f);
    z = z0 + dz * ((float)rand() * 4.656612873077393e-10f);
    func_09AAD8(e, x, y, z);
}
