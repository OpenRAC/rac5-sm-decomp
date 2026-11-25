/* LEVEL_16:0x0DAC90 -- placement copy of LEVEL_01_0EF930.c. */
typedef struct { unsigned char bytes[100]; } Entry;
extern Entry D_0027E63C[];
extern void func_0DAB60(Entry *entry, float *pos);

void func_0DAC90(unsigned int index, float *pos) {
    func_0DAB60(&D_0027E63C[index], pos);
}
