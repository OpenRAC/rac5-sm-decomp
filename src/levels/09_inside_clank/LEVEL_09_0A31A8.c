typedef struct { unsigned char bytes[24]; } Entry;
extern Entry D_0029ABD8[];
extern void func_0A3078(Entry *entry, int value);

void func_0A31A8(unsigned int index, int value) {
    func_0A3078(&D_0029ABD8[index], value);
}
