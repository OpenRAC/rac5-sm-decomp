/* LEVEL_17:0x0D9BB8 -- placement copy of LEVEL_16_0DAC90.c: placement copy of LEVEL_01_0EF930.c. */
typedef struct { unsigned char bytes[100]; } Entry;
extern Entry D_0026F93C[];
extern void func_0D9A88(Entry *entry, float *pos);

void func_0D9BB8(unsigned int index, float *pos) {
    func_0D9A88(&D_0026F93C[index], pos);
}
