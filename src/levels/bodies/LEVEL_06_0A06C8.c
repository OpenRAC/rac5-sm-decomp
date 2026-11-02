typedef struct { unsigned char bytes[24]; } Entry;
extern Entry D_002A01D8[];
extern void func_0A0598(Entry *entry);

void func_0A06C8(unsigned int index) {
    func_0A0598(&D_002A01D8[index]);
}
