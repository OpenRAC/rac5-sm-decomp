typedef struct { unsigned char bytes[100]; } Entry;
extern Entry D_003399EC[];
extern void func_0EF2A0(Entry *entry);

void func_0EF408(unsigned int index) {
    func_0EF2A0(&D_003399EC[index]);
}
