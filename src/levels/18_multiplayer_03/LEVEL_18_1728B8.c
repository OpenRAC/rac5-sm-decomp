/* LEVEL_18:0x1728B8 -- placement copy of LEVEL_16_16CDE8.c. */
typedef struct {
    int f00;
    char pad[0x54];
    float f58;
} Inner;

typedef struct {
    char pad[0x58];
    Inner *p58;
} Outer;

void func_172E68(void *a0, int a1);

void func_1728B8(Outer *a0)
{
    Inner *p = a0->p58;
    int id = p->f00;
    float t = p->f58 - 1.0f;

    p->f58 = t;
    if (t <= 0.0f)
        func_172E68(a0, id);
}
