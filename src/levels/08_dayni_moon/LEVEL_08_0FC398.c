typedef struct { unsigned char bytes[52]; } Entry;
extern Entry D_003807BC[];
extern void func_0FBF10(Entry *entry);

void func_0FC398(unsigned int index) {
    func_0FBF10(&D_003807BC[index]);
}
