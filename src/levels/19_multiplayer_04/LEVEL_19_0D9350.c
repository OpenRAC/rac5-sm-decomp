/* LEVEL_19:0x0D9350 -- placement copy of LEVEL_16_0DAC90.c: placement copy of LEVEL_01_0EF930.c. */
typedef struct { unsigned char bytes[100]; } Entry;
extern Entry D_0027E7BC[];
extern void func_0D9220(Entry *entry, float *pos);

void func_0D9350(unsigned int index, float *pos) {
    func_0D9220(&D_0027E7BC[index], pos);
}
