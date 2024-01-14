object IndividualForm2: TIndividualForm2
  Left = 0
  Top = 0
  Caption = 'IndividualForm2'
  ClientHeight = 587
  ClientWidth = 1030
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  OnResize = FormResize
  TextHeight = 15
  object Exit: TButton
    Left = 481
    Top = 554
    Width = 75
    Height = 25
    Caption = 'Exit'
    TabOrder = 0
    OnClick = ExitClick
  end
  object Next: TButton
    Left = 385
    Top = 554
    Width = 75
    Height = 25
    Caption = 'Next'
    TabOrder = 1
    OnClick = NextClick
  end
  object Previous: TButton
    Left = 144
    Top = 554
    Width = 75
    Height = 25
    Caption = 'Back'
    TabOrder = 2
    OnClick = PreviousClick
  end
  object Button1: TButton
    Left = 242
    Top = 554
    Width = 25
    Height = 25
    Caption = '1'
    TabOrder = 3
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 290
    Top = 554
    Width = 25
    Height = 25
    Caption = '2'
    TabOrder = 4
  end
  object Button3: TButton
    Left = 339
    Top = 554
    Width = 25
    Height = 25
    Caption = '3'
    TabOrder = 5
    OnClick = Button3Click
  end
  object RadioGroup1: TRadioGroup
    Left = 144
    Top = 56
    Width = 505
    Height = 137
    Caption = 
      'How conscious are you about turning off lights and electronics w' +
      'hen not in use?'
    Items.Strings = (
      'Very conscious'
      'Somewhat conscious'
      'Neutral'
      'Somewhat unconcerned'
      'Very unconcerned')
    TabOrder = 6
  end
  object RadioGroup2: TRadioGroup
    Left = 144
    Top = 208
    Width = 505
    Height = 145
    Caption = 'How mindful are you of your water consumption at home?'
    Items.Strings = (
      'Very mindful'
      'Somewhat mindful'
      'Neutral'
      'Somewhat careless'
      'Very careless')
    TabOrder = 7
  end
  object RadioGroup3: TRadioGroup
    Left = 144
    Top = 359
    Width = 505
    Height = 98
    Caption = 'Do you have water-saving devices installed in your home?'
    Items.Strings = (
      'Yes'
      'No')
    TabOrder = 8
  end
end
