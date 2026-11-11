typedef struct { unsigned char bytes[100]; } Entry;
extern Entry D_00347ABC[];
extern void func_0F59B0(Entry *entry, float *pos);

void func_0F5AE0(unsigned int index, float *pos) {
    func_0F59B0(&D_00347ABC[index], pos);
}
