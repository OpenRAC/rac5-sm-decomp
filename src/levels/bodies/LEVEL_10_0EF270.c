typedef struct { unsigned char bytes[100]; } Entry;
extern Entry D_003399BC[];
extern void func_0EF140(Entry *entry, float *pos);

void func_0EF270(unsigned int index, float *pos) {
    func_0EF140(&D_003399BC[index], pos);
}
