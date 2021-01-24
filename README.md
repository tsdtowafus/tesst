# tesst

git status   // xem status
git diff      // so sánh thay đổi

- Các bước tạo một project mới:
git init
git add .       // add tất cả
git commit -m "thêm mô tả"
git remote add origin <link>
git push origin master

- Các bước clone để chỉnh sửa code đã có trên git:
Chuyển đến forder cần clone về nhập lệnh:
git clone <link clone>
git checkout -b nhanh1      // tạo một nhánh mới
git add .
git commit -m "thêm mô tả"
git push
git push --...
Vào đường link -> Create pull request

- Update code mới về 
git checkout master
git pull
Hoặc:
git pull origin master
