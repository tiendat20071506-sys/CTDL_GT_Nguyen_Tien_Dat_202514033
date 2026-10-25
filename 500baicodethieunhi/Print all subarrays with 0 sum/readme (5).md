# Tìm Tất Cả Các Mảng Con Có Tổng Bằng 0

## Giải thích thuật toán

Chương trình sử dụng phương pháp duyệt vét cạn (Brute Force) để tìm tất cả các mảng con liên tiếp có tổng bằng 0:

1. **Vòng lặp ngoài (`i`)**: Xác định chỉ số bắt đầu của mảng con. Duyệt từ đầu đến cuối mảng.

2. **Vòng lặp trong (`j`)**: Xác định chỉ số kết thúc của mảng con. Duyệt từ vị trí `i` hiện tại đến cuối mảng, đồng thời cộng dồn giá trị của phần tử tại chỉ số `j` vào biến `sum`.

3. **Kiểm tra và in kết quả**: Nếu `sum == 0`, một mảng con thỏa mãn điều kiện đã được tìm thấy. Vòng lặp `k` sẽ chạy từ chỉ số `i` đến `j` để in các phần tử của mảng con này ra màn hình, đồng thời đánh dấu biến `found = 1`.

4. **Kiểm tra cờ hiệu**: Biến `found` khởi tạo bằng 0 được sử dụng để theo dõi xem có mảng con nào được in ra hay không. Nếu hai vòng lặp kết thúc mà `found` vẫn bằng 0, chương trình sẽ in thông báo không tìm thấy mảng con nào thỏa mãn.

### Độ phức tạp:

* **Độ phức tạp thời gian (Time Complexity)**: O(N^2) cho quá trình duyệt và tính tổng các mảng con (trong đó N là số lượng phần tử của mảng).

## Các Testcase Minh Họa

### Testcase 1

* **Input:**

  * Số lượng phần tử: `5`
  * Các phần tử: `1 2 -3 3 -1`

* **Output:**

  > { 1, 2, -3 }
  > { -3, 3 }

### Testcase 2

* **Input:**

  * Số lượng phần tử: `4`
  * Các phần tử: `1 3 5 7`

* **Output:**

  > Khong tim thay mang con nao co tong bang 0.