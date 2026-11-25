/* LEVEL_18:0x0D8A50 -- placement copy of LEVEL_16_0DAC90.c: placement copy of LEVEL_01_0EF930.c. */
typedef struct { unsigned char bytes[100]; } Entry;
extern Entry D_0027E9BC[];
extern void func_0D8920(Entry *entry, float *pos);

void func_0D8A50(unsigned int index, float *pos) {
    func_0D8920(&D_0027E9BC[index], pos);
}
