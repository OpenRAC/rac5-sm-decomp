/* LEVEL_09:0x076F08 -- placement copy of LEVEL_01_07A400.c: drops stale table entries by moving the last entry into their slot. */
typedef struct {
    char pad0[0x64];
    unsigned int w64;
} Owner;
typedef struct {
    Owner *w0;
    int w4;
    int w8;
    float wC;
    int w10;
    int w14;
} Ent;
extern int D_001DFF20;
extern int D_001DDDB8;
extern unsigned int D_001DFF18;
extern Ent D_00221C30[];

void func_076F08(void)
{
    unsigned int i;

    if (D_001DFF20 != D_001DDDB8) {
        for (i = 0; i < D_001DFF18; i++) {
            if (D_00221C30[i].w14 == 3 || D_00221C30[i].w0 == 0 || (D_00221C30[i].w0->w64 & 0xF) != 1) {
                if (i == D_001DFF18 - 1) {
                    D_001DFF18 = i;
                } else {
                    D_001DFF18 = D_001DFF18 - 1;
                    D_00221C30[i].w0 = D_00221C30[D_001DFF18].w0;
                    D_00221C30[i].w8 = D_00221C30[D_001DFF18].w8;
                    D_00221C30[i].wC = D_00221C30[D_001DFF18].wC;
                    D_00221C30[i].w10 = D_00221C30[D_001DFF18].w10;
                    D_00221C30[i].w14 = D_00221C30[D_001DFF18].w14;
                }
            }
        }
    }
}
