typedef struct { unsigned char bytes[100]; } Entry;
extern Entry D_003019FC[];
extern void func_0E26E8(Entry *entry, float *pos);

void func_0E2818(unsigned int index, float *pos) {
    func_0E26E8(&D_003019FC[index], pos);
}
