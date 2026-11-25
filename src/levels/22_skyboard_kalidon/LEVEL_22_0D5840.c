/* LEVEL_22:0x0D5840 -- placement copy of LEVEL_16_0DAC90.c: placement copy of LEVEL_01_0EF930.c. */
typedef struct { unsigned char bytes[100]; } Entry;
extern Entry D_0028617C[];
extern void func_0D5710(Entry *entry, float *pos);

void func_0D5840(unsigned int index, float *pos) {
    func_0D5710(&D_0028617C[index], pos);
}
