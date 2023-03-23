#SF과정 1일차
-간단한 OT과정
간단한 ot와 함께 git에 대해 배웠다.
git과 github은 스마트미러 프로젝트 당시 소스 복사를 위해 가입을 한 적이 있었다.
사용법이나 작업당시 내용은 생각이 나지 않지만 회원가입을 생략 했다는 것만으로 다행스러웠다.
다행스럽게도 아이디와 비밀번호가 평소와 같아서 스무스했다.

-git의 기본과정
//git과 연동
cd Desktop
mkdir github
cd github
git config --global init.defaultBranch main
git config --global user.name "jposco"
git config --global user.email "godeok24@naver.com"
git config --global --list

//폴더 내 이동
pwd : 현재 작업 폴더 위치 (cmd에서 안됨. cmd에서는 그냥 보임)

ls : 현재 위치 내 모든 파일 표시 (cmd에서 안됨)

dir : 현재 위치 내 모든 파일 표시

cd 폴더경로 : 위치 내 있는 폴더로 이동 (cd 절대경로 가능)

cd .. : 이전 폴더로 이동

// 업로드할 파일 추가
git add .

// commit
git commit -m "코멘트"
commit -m은 관용어라고 생각하자

// 최신 commit 코멘트 수정
git commit --amend 

// commit revert (히스토리 유지)
git revert 원복할 commitID

// 업로드
git push 저장소명 브랜치명
git push origin main

// 저장소 확인
git remote

// 브랜치
git branch : 모든 브랜치 확인, 현재 브랜치 색 다름


git branch 브랜치명 : 새로운 브랜치 생성

git checkout (-b) 브랜치명 : 브랜치 이동

git merge 합쳐질브랜치명 : 명령어를 실행하는 브랜치에 합쳐질브랜치가 합쳐짐