typedef struct{
	int so_luong;
	int* dia_chi_vung_nho;
    //struct node* addr; 
} mang_co_dan;

// tao struct mieu ta node
// dia chi cua node tiep theo
// gia tri cua node 
typedef struct node{
	int data;
	struct node* next;
} node;
// tao struct de mieu ta doi tuong la link_list
typedef struct {
	int size;
	node *head;
} linklist;
// dia chi cua node dau tien
// so luong node

void array_init(mang_co_dan* addr_ptr, int so_luong);
void array_set_val(mang_co_dan* addr_ptr, int index, int val);
int  array_get_value(mang_co_dan* addr_ptr, int index);
void array_resize(mang_co_dan* addr_ptr, int size);
void array_show(mang_co_dan* addr_ptr);
int  array_sum(mang_co_dan* addr_ptr);
void set_all_val(mang_co_dan* addr_ptr);

void link_list_init(linklist* ll);
void link_list_add_node(linklist* ll, int val);
int  link_list_get_val(linklist* ll, int index);
void link_list_remove_node(linklist* ll, int index);
void show_link_list(linklist* ll);
void link_list_insert_node(linklist* ll, int index, int val);


