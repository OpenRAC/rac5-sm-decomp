/* LEVEL_23:0x0493A0 -- cale deux champs du mobile (+0x240 recu, +0x26C
   recopie de +0xD0) puis confie le mobile au service. */

extern void func_041A80(void *a0);

void func_0493A0(char *a0)
{
    *(float *)(a0 + 0x240) = 0.0500000045f;
    *(float *)(a0 + 0x26C) = *(float *)(a0 + 0xD0);
    func_041A80(a0);
}
