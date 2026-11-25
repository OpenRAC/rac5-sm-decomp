typedef struct { unsigned char bytes[24]; } Entry;
extern Entry D_002A01D8[];
extern void func_0A0598(Entry *entry, int value);

void func_0A06C8(unsigned int index, int value) {
    func_0A0598(&D_002A01D8[index], value);
}
