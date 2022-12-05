Public Class fmc
    Public Function Rename(ByVal iLocation As String, ByVal iOldName As String, ByVal iNewName As String, ByVal iOverwrite As Boolean) As String
        Dim vReturn As String = "Rename was aborted"
        'Job--------------
        Try
            Dim vOldPath As String = FileIO.FileSystem.CombinePath(iLocation, iOldName)
            Dim vNewPath As String = FileIO.FileSystem.CombinePath(iLocation, iNewName)
            Dim b As Boolean = True
            If FileIO.FileSystem.FileExists(vNewPath) Then
                b = False
                If iOverwrite = True Then
                    b = True
                ElseIf Windows.Forms.DialogResult.Yes = System.Windows.Forms.MessageBox.Show("File '" + vNewPath + "' exists. Overwrite?", "Confirmation", Windows.Forms.MessageBoxButtons.YesNo, Windows.Forms.MessageBoxIcon.Asterisk) Then
                    b = True
                End If
                If b = True Then
                    FileIO.FileSystem.DeleteFile(vNewPath)
                End If
            End If
            If b = True Then
                My.Computer.FileSystem.RenameFile(vOldPath, iNewName)
                vReturn = "Success"
            End If
        Catch ex As Exception
            vReturn = ex.Message
        End Try
        'Clearout---------
        Return vReturn
    End Function
    Protected Overrides Sub OnPaint(ByVal e As System.Windows.Forms.PaintEventArgs)
        MyBase.OnPaint(e)

        'Add your custom paint code here
    End Sub
End Class
