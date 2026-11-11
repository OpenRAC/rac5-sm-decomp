typedef struct { unsigned char bytes[100]; } Entry;
extern Entry D_0034B43C[];
extern void func_0EE098(Entry *entry, float *pos);

void func_0EE1C8(unsigned int index, float *pos) {
    func_0EE098(&D_0034B43C[index], pos);
}
