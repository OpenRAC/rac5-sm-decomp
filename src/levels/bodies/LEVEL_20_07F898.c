typedef struct { unsigned char bytes[24]; } Entry;
extern Entry D_0018E7E8[];
extern void func_07F998(Entry *entry);

void func_07F898(unsigned int index) {
    func_07F998(&D_0018E7E8[index]);
}
