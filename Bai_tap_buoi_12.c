#include <stdio.h>
#include <iostream>
#include <malloc.h>
#include <initializer_list>
#include <string>
#include "libc.h"
using namespace std;
class hocsinh {
public: 
	string ten;
	double dtb; 
	//ham tao
	hocsinh() {
		ten = "chua_ten";
		dtb = 0.0;
	}
	//ham tao 2 doi so
	hocsinh(string _ten, double _dtb) {
		ten = _ten;
		dtb = _dtb;
	}
};
template <class T> //định nghĩa class arr là một khuôn mẫu template giong viec tạo ra một cái thùng tên arr 
class arr { 
public: 
	T* diachi;
	int length;
	arr(int len) {
		diachi = new T[len];
		length = len;
	}
	arr(initializer_list<T> init_list) {
		length = init_list.size();
		diachi = new T[length]; 
		if (diachi == NULL) {
			throw("cap mem that bai");
		}
		int index = 0;
		for (T phan_tu : init_list) {
			diachi[index++] = phan_tu;
		}
	}
	T& operator[] (int vi_tri) {
		return diachi[vi_tri];
	}
};
bool sosanhdtb(hocsinh a, hocsinh b) {
	auto dtb_a = a.dtb;
	auto dtb_b = b.dtb;
	if (dtb_a > dtb_b) return true;
	else return false;
}
template <typename T> 
void sapxepdtb(arr<T>& mang, bool (*ham_con_tro)(T,T)) {
	for (int i = 0; i < mang.length - 1; i++) {
		for (int j = i; j < mang.length; j++) {
			if (ham_con_tro(mang[i], mang[j])) {
				auto temp = mang[i];
				mang[i] = mang[j];
				mang[j] = temp;
			}
		}
	}
}

ostream& operator << (ostream& os, hocsinh hs) {
	os << "Hoc sinh: " << hs.ten << ", diem: " << hs.dtb << endl;
	return os;
}
ostream& operator << (ostream& os, arr<hocsinh>& mang_hs) {
	os << "{\n";
	for (int i = 0; i < mang_hs.length; i++) {
		os << mang_hs[i];
	}
	os << "}\n";
	return os;
}


void Bai_tap_buoi_12() {
	arr<hocsinh> mang_hs = { hocsinh("Nguyen Van A", 6.5),
		hocsinh("Tran Thi B", 9.2),
		hocsinh("Le Van C", 8.0) };
	cout << "TRUOC SAP XEP " << endl;
	cout <<  mang_hs;
	sapxepdtb(mang_hs, sosanhdtb);
	cout << "Sau SAP XEP " << endl;
	cout << mang_hs;
	
}
