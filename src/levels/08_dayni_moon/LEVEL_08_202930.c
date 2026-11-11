typedef struct {
    char pad[0xE8];
    float f0E8;
    char pad2[0x04];
} Ent;

extern Ent D_003EADC0[];

void func_202930(float f12)
{
    unsigned i = 0;

    do {
        D_003EADC0[i].f0E8 = f12;
        i++;
    } while (i < 2);
}
