object IndividualForm3: TIndividualForm3
  Left = 0
  Top = 0
  Caption = 'IndividualForm3'
  ClientHeight = 674
  ClientWidth = 1148
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  OnResize = FormResize
  TextHeight = 15
  object Next: TButton
    Left = 305
    Top = 552
    Width = 75
    Height = 25
    Caption = 'Next'
    TabOrder = 0
    OnClick = NextClick
  end
  object Previous: TButton
    Left = 72
    Top = 552
    Width = 75
    Height = 25
    Caption = 'Back'
    TabOrder = 1
    OnClick = PreviousClick
  end
  object Exit: TButton
    Left = 401
    Top = 552
    Width = 75
    Height = 25
    Caption = 'Exit'
    TabOrder = 2
    OnClick = ExitClick
  end
  object Button1: TButton
    Left = 168
    Top = 552
    Width = 25
    Height = 25
    Caption = '1'
    TabOrder = 3
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 216
    Top = 552
    Width = 25
    Height = 25
    Caption = '2'
    TabOrder = 4
    OnClick = Button2Click
  end
  object Button3: TButton
    Left = 266
    Top = 552
    Width = 25
    Height = 25
    Caption = '3'
    TabOrder = 5
  end
  object RadioGroup1: TRadioGroup
    Left = 72
    Top = 32
    Width = 441
    Height = 89
    Caption = ' Do you actively reduce single-use plastics in your daily life?'
    Items.Strings = (
      'Yes'
      'No')
    TabOrder = 6
  end
  object RadioGroup2: TRadioGroup
    Left = 72
    Top = 152
    Width = 457
    Height = 153
    Caption = 
      'How often do you consume plant-based meals or follow a vegetaria' +
      'n/vegan diet?'
    Items.Strings = (
      'Always'
      'Often'
      'Occasionally'
      'Rarely'
      'Never')
    TabOrder = 7
  end
  object RadioGroup3: TRadioGroup
    Left = 72
    Top = 328
    Width = 457
    Height = 145
    Caption = ' Do you bring reusable bags when shopping?'
    Items.Strings = (
      'Always'
      'Often'
      'Occasionally'
      'Rarely'
      'Never')
    TabOrder = 8
  end
end
