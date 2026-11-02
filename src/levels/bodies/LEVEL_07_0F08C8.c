typedef struct { unsigned char bytes[100]; } Entry;
extern Entry D_00345EEC[];
extern void func_0F0760(Entry *entry);

void func_0F08C8(unsigned int index) {
    func_0F0760(&D_00345EEC[index]);
}
