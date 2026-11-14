/* LEVEL_15:0x0F6778 -- clears the four floats of the global vector, the three words below the entry marker and the marker word of the global block. */
typedef struct { char pad[0x4414C]; int list[3]; int last; } Global;
extern float D_002ECC84[];
extern Global D_002A8B58;

void func_0F6778(void)
{
    int i;

    D_002ECC84[3] = D_002ECC84[0] = D_002ECC84[2] = D_002ECC84[1] = 0.0f;

    for (i = 2; i >= 0; i--) {
        D_002A8B58.list[i] = 0;
    }
    D_002A8B58.last = 0;
}
