typedef struct { unsigned char bytes[100]; } Entry;
extern Entry D_003305EC[];
extern void func_0EF960(Entry *entry);

void func_0EFAC8(unsigned int index) {
    func_0EF960(&D_003305EC[index]);
}
