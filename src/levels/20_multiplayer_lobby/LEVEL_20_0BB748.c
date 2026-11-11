/* LEVEL_20:0x0BB748 -- placement copy of LEVEL_01_0EF930.c. */
typedef struct { unsigned char bytes[100]; } Entry;
extern Entry D_001A1E7C[];
extern void func_0BB618(Entry *entry, float *pos);

void func_0BB748(unsigned int index, float *pos) {
    func_0BB618(&D_001A1E7C[index], pos);
}
