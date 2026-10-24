# Sắp Xếp Mảng Nhị Phân (0 và 1)

## Giải thích thuật toán

Chương trình sử dụng phương pháp **Ghi đè trực tiếp (In-place)** thông qua việc đếm số lượng các số `0` với 2 bước chính:

1. **Bước 1 (Đẩy số 0 lên đầu)**: Sử dụng một biến `k` (khởi tạo bằng `0`) để theo dõi vị trí trống tiếp theo dành cho số `0`. Duyệt qua toàn bộ mảng từ trái sang phải bằng vòng lặp `i`. Nếu `a[i] == 0`, gán phần tử tại vị trí `k` bằng `0`, sau đó tăng `k` lên `1`.

2. **Bước 2 (Điền số 1 vào cuối)**: Sau khi vòng lặp đầu tiên kết thúc, biến `k` chính là tổng số lượng các số `0` có trong mảng (và cũng là vị trí bắt đầu để điền số 1). Lúc này, ta chỉ cần dùng một vòng lặp bắt đầu từ vị trí `k` đến cuối mảng, và gán tất cả các phần tử này bằng `1`.

### Độ phức tạp:

* **Độ phức tạp thời gian (Time Complexity)**: O(N) vì mảng chỉ được duyệt qua bằng hai vòng lặp nối tiếp nhau không lồng nhau (trong đó N là số lượng phần tử của mảng).

## Các Testcase Minh Họa

### Testcase 1: Mảng gồm các số 0 và 1 nằm lộn xộn

* **Input:**

  * Các phần tử: `1 0 1 0 1 0 0 1`

* **Output:**

  > { 0, 0, 0, 0, 1, 1, 1, 1 }

### Testcase 2: Mảng toàn số 1

* **Input:**

  * Các phần tử: `1 1 1 1`

* **Output:**

  > { 1, 1, 1, 1 }