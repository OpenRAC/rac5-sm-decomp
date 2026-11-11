typedef struct { unsigned char bytes[100]; } Entry;
extern Entry D_00345EBC[];
extern void func_0F0600(Entry *entry, float *pos);

void func_0F0730(unsigned int index, float *pos) {
    func_0F0600(&D_00345EBC[index], pos);
}
