typedef struct { unsigned char bytes[100]; } Entry;
extern Entry D_002F24E4[];
extern void func_114BE0(Entry *entry, float *a, float *b, float f);

void func_114D40(unsigned int index, float *a, float *b, float f) {
    func_114BE0(&D_002F24E4[index], a, b, f);
}
