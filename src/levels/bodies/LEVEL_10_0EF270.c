typedef struct { unsigned char bytes[100]; } Entry;
extern Entry D_003399BC[];
extern void func_0EF140(Entry *entry);

void func_0EF270(unsigned int index) {
    func_0EF140(&D_003399BC[index]);
}
