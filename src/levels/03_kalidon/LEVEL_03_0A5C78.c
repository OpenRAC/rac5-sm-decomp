typedef struct { unsigned char bytes[24]; } Entry;
extern Entry D_002CE2D8[];
extern void func_0A5B48(Entry *entry, int value);

void func_0A5C78(unsigned int index, int value) {
    func_0A5B48(&D_002CE2D8[index], value);
}
