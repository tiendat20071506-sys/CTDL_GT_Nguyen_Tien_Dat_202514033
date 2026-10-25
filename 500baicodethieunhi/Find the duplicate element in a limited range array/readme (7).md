# Tìm Phần Tử Trùng Lặp

## Giải thích thuật toán

Chương trình sử dụng tính chất của phép toán thao tác bit XOR (`^`) để tìm phần tử bị trùng lặp trong một mảng kích thước `n` (chứa các số nguyên từ `1` đến `n - 1`).

1. **Khởi tạo**: Biến `k` được khởi tạo bằng 0.

2. **Vòng lặp thứ nhất**: Duyệt qua tất cả các phần tử của mảng và thực hiện phép XOR từng phần tử với `k`.

3. **Vòng lặp thứ hai**: Thực hiện phép XOR biến `k` với tất cả các số nguyên từ `1` đến `n - 1`.

4. **Nguyên lý hoạt động**: Dựa trên tính chất của XOR ($x \oplus x = 0$ và $x \oplus 0 = x$), khi XOR tất cả các phần tử trong mảng với các số từ `1` đến `n - 1`, các số xuất hiện một lần trong mảng sẽ kết hợp với số tương ứng trong chuỗi `1` đến `n - 1` để triệt tiêu thành 0. Phần tử trùng lặp (xuất hiện 2 lần trong mảng) sẽ kết hợp với số tương ứng trong chuỗi `1` đến `n - 1` tạo thành 3 lần xuất hiện, do đó giá trị cuối cùng được giữ lại trong `k` chính là phần tử trùng lặp.

### Độ phức tạp:

* **Độ phức tạp thời gian (Time Complexity)**: O(N) vì chương trình sử dụng các vòng lặp đơn duyệt qua `n` phần tử và `n - 1` số nguyên.

## Các Testcase Minh Họa

### Testcase 1

* **Input:**
  * Số lượng phần tử: `5`
  * Các phần tử: `1 2 3 4 2`

* **Output:**
  > Ban muon nhap bao nhieu phan tu? (Toi da 100):
  > 5
  > 1 2 3 4 2
  > The duplicate element is 2

### Testcase 2

* **Input:**
  * Số lượng phần tử: `4`
  * Các phần tử: `1 3 2 1`

* **Output:**
  > Ban muon nhap bao nhieu phan tu? (Toi da 100):
  > 4
  > 1 3 2 1
  > The duplicate element is 1