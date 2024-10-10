# PowerShell script to check for a folder and shutdown if not found

$DesktopPath = [System.Environment]::GetFolderPath('Desktop')
$FolderPath = Join-Path $DesktopPath 'itsme'
$TimeLimit = 30

# Wait for 30 seconds
Start-Sleep -Seconds $TimeLimit

# Check if the 'itsme' folder exists
if (-Not (Test-Path $FolderPath)) {
    # If folder doesn't exist, shutdown the PC
    Shutdown /s /f /t 0
} else {
    Write-Host "'itsme' folder exists. No shutdown."
}
