# Di Chuyển Tất Cả Các Số 0 Xuống Cuối Mảng

## Giải thích thuật toán

Chương trình thực hiện việc di chuyển tất cả các số 0 xuống cuối mảng nhưng vẫn giữ nguyên thứ tự tương đối của các phần tử khác 0 bằng cách sử dụng một biến đếm phụ trợ:

1. **Khởi tạo**: Sử dụng một biến `k = 0` để theo dõi vị trí lưu trữ tiếp theo cho phần tử khác 0.

2. **Vòng lặp thứ nhất (`i`)**: Duyệt qua toàn bộ các phần tử của mảng từ đầu đến cuối. Nếu phần tử tại vị trí `i` có giá trị khác 0 (`mang[i] != 0`), phần tử này sẽ được gán vào vị trí `k` trong mảng, sau đó biến `k` được tăng lên 1.

3. **Vòng lặp thứ hai (`i`)**: Khi vòng lặp thứ nhất kết thúc, biến `k` chính là chỉ số bắt đầu của các vị trí còn trống ở cuối mảng. Vòng lặp thứ hai duyệt từ `k` đến cuối mảng và gán tất cả các phần tử tại các vị trí này bằng 0.

### Độ phức tạp:

* **Độ phức tạp thời gian (Time Complexity)**: O(N) vì chương trình chỉ thực hiện các bước duyệt qua mảng một cách tuyến tính (với N là số lượng phần tử của mảng).

## Các Testcase Minh Họa

### Testcase 1

* **Input:**

  * Mảng ban đầu: `{ 6, 0, 8, 2, 3, 0, 4, 0, 1 }`

* **Output:**

  > Mang ban dau: { 6, 0, 8, 2, 3, 0, 4, 0, 1 }
  > Mang sau khi xu ly: { 6, 8, 2, 3, 4, 1, 0, 0, 0 }

### Testcase 2

* **Input:**

  * Mảng ban đầu: `{ 0, 0, 1, 2, 0 }`

* **Output:**

  > Mang ban dau: { 0, 0, 1, 2, 0 }
  > Mang sau khi xu ly: { 1, 2, 0, 0, 0 }