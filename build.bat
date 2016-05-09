@echo off
call "C:\Program Files (x86)\Microsoft Visual Studio 14.0\VC\vcvarsall.bat" x86
echo Starting...

devenv "CourseProject.sln" /build Debug

echo build complete.
pause