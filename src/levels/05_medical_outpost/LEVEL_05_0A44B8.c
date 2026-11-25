typedef struct { unsigned char bytes[24]; } Entry;
extern Entry D_0029F318[];
extern void func_0A4388(Entry *entry, int value);

void func_0A44B8(unsigned int index, int value) {
    func_0A4388(&D_0029F318[index], value);
}
